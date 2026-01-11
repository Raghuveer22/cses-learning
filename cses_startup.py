import requests
from bs4 import BeautifulSoup
import os
import re

URL = "https://cses.fi/problemset/"


def replace_math_symbols(text):
    replacements = [
            (r"\\leq|\\le|≤", "<="),
            (r"\\geq|\\ge|≥", ">="),
            (r"\\lt|<", "<"),
            (r"\\gt|>", ">"),
            (r"\\neq|≠", "!="),
            (r"\\rightarrow|→|⇒|➡|⟶", "->"),
            (r"\\leftarrow|<-|←|⇐|⬅|⟵", "<-"),
            (r"\\dots|\\ldots|…", "..."),
            (r"\\times", "x"),
        ]
    for pattern, repl in replacements:
        text = re.sub(pattern, repl, text)
    return text

def fetch_problems():
    response = requests.get(URL)
    response.raise_for_status()
    soup = BeautifulSoup(response.text, "html.parser")
    with open("cses_soup.html","w",encoding="utf-8") as f:
        f.write(str(soup))

    content_div = soup.find("div", class_="content")
    problems_by_topic = []
    if content_div:
        h2s = content_div.find_all("h2")
        for h2 in h2s:
            topic = h2.text.strip()
            ul = h2.find_next_sibling("ul", class_="task-list")
            if not ul:
                continue
            tasks = []
            for li in ul.find_all("li", class_="task"):
                a = li.find("a")
                if a:
                    title = a.text.strip()
                    href = "https://cses.fi" + a["href"]
                    tasks.append((title, href))
            problems_by_topic.append((topic, tasks))
    return problems_by_topic

def write_to_folders(problems_by_topic):
    for idx, (topic, tasks) in enumerate(problems_by_topic):
        if idx == 0:
            continue
        folder_name = f"{idx:02d}-{topic.replace(' ', '_')}"
        os.makedirs(folder_name, exist_ok=True)
        readme_path = os.path.join(folder_name, f"{idx:02d}-{topic.replace(' ', '_')}.md")
        with open(readme_path, "w", encoding="utf-8") as f:
            f.write(f"# {topic}\n\n")
            for tidx, (title, url) in enumerate(tasks, 1):
                f.write(f"{tidx:02d}. [{title}]({url})\n")
                try:
                    resp = requests.get(url)
                    resp.raise_for_status()
                    soup_1 = BeautifulSoup(resp.text, "html.parser")
                    statement_div = soup_1.find('div', class_='content')
                    statement = statement_div.text.strip() if statement_div else "Problem statement not found."
                    statement = replace_math_symbols(statement)
                except Exception as e:
                    statement = f"Error fetching problem statement: {e}"

                cpp_filename = f"{tidx:02d}-{title.replace(' ', '_')}.cpp"
                cpp_filepath = os.path.join(folder_name, cpp_filename)
                with open("boilerplate.cpp", "r", encoding="utf-8") as boiler_file:
                    cpp_boilerplate = boiler_file.read()
                # Split boilerplate into headers and main function
                main_index = cpp_boilerplate.find("int main()")
                if main_index != -1:
                    headers = cpp_boilerplate[:main_index].rstrip()
                    main_func = cpp_boilerplate[main_index:]
                else:
                    headers = cpp_boilerplate
                    main_func = ""
                comment_lines = [f"// Problem link: {url}"]
                comment_lines += [f"// {line}" for line in statement.splitlines()]
                comment_statement = '\n'.join(comment_lines)
                with open(cpp_filepath, "w", encoding="utf-8") as cf:
                    cf.write(headers + "\n\n" + comment_statement + "\n\n" + main_func)

if __name__ == "__main__":
    # Remove all files and folders in the root folder except 'boilerplate.cpp' and 'cses_startup.py'
    import shutil
    root = os.path.dirname(os.path.abspath(__file__))
    keep_files = {os.path.basename(__file__), 'boilerplate.cpp'}
    for name in os.listdir(root):
        path = os.path.join(root, name)
        if name in keep_files:
            continue
        try:
            if os.path.isfile(path) or os.path.islink(path):
                os.remove(path)
            elif os.path.isdir(path):
                shutil.rmtree(path)
        except Exception as e:
            print(f"Failed to remove {path}: {e}")
    problems_by_topic = fetch_problems()
    write_to_folders(problems_by_topic)
    print("Folders and README files created for each topic.")