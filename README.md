## What is word sage ?
Spell Check++ is a spelling companion that ensures error-free writing with intelligent suggestions.
## How it works ?
This built on an existing library called dictionary which was built and open-sourced by "author_name(repo_link)".
This project has 2 major functionalities.
1) Checking the word for correctness : The program checks the given word in the trie-data structure which is built by loading the all the words from the dictionary text file. This involves "check"  function of dictionary library.
2) Correct the wrongly spelt word : Here the program uses manipulates the word and uses the "check" function to check the correctness of the modified word. If it is found in the dictionary, it will be suggested as the possible correct word.
Apart from the above mentioned two functions, the program uses "load" and "unload" for building and destroying the trie-tree.

Embed a Demo video here.
## How to use the program ?
### Step 1 : fork this repository and open it in codespaces and clone it if you want to run it locally
### Step 2 : Open terminal and navigate to the directory - "source"
### Step 3 : run "make" command
### Step 4 : run ./a.out "THE_ACTUAL_WORD_YOU_WANT_TO_CHECK"

## Similar projects
Special thanks to "embed author name"
There is always some scope for the improvement.You are always welcome to share your feedback / suggestions.
Together, we can build the better future. feel free to open an issue / a pull-request and contribute to this project.
Happy open-sourcing !!!
