# JAMTE ⚔️  
**Just A Minimal Text Editor**

---

## 🧠 What is JAMTE?

JAMTE is a super minimal terminal-based text editor written in C++.  
No GUI. No dependencies. No bullshit.

It’s:
- ~2KB of source code  
- ~44KB compiled  
- Single-file, ultra-fast  
- Built to run instantly, anywhere, anytime  

Perfect for quick edits, journaling, scripting, or just flexing on your bloated IDE.

---

## ✨ Features

- 📄 Create and open any file
- ✍️ Write to files from the terminal
- 📖 Read files line by line
- ➕ Append to existing files (without wiping them!)
- 🔁 Command-style input (read, write, append, exit)
- 🧘‍♂️ Peaceful. Fast. Focused.

---

## ⚙️ How to Use

### 1. Compile it

```bash
g++ jamte.cpp -o jamte
```

2. Run it

```./jamte```

3. Jam away

You'll be prompted with:

ENTER FILE TO TOUCH (eg. file.txt) >>

Once you pick your file, JAMTE will give you options:

JAMTE
Just a Minimal Text Editor
'exit' to EXIT!
READ
WRITE
APPEND

Type a command like write, start typing your content, and type exit to finish.
🔥 Example

./jamte
ENTER FILE TO TOUCH (eg. file.txt) >> diary.txt

DO >> write
>> Today I built JAMTE.
>> It’s tiny, clean, and awesome.
>> exit

DO >> read
Today I built JAMTE.
It’s tiny, clean, and awesome.

DO >> exit
BYE!!

## 🧪 Why I Built It

Because sometimes you don’t want to boot up VS Code just to write 3 lines.
Because writing code should feel like writing code — not fighting an Electron monster.
Because the old-school way still slaps.
🤘 Who Made This?
WeAreGTA

## 📜 License

MIT — do whatever you want with it.
Fork it. Remix it. Break it. Make it yours.
