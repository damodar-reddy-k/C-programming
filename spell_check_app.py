import streamlit as st
import subprocess
import random

# Set of background words for art
background_words = {
    "Python", "Streamlit", "Machine Learning", "Data Science", "AI", "Code", "Innovation",
    "Technology", "Open Source", "Community", "Collaboration", "Research", "Development",
    "Creativity", "Algorithms", "Visualizations", "Education", "Inspiration", "Progress",
    "Inspire", "Explore", "Dream", "Curiosity", "Imagination", "Wonder", "Innovate",
    "Journey", "Discovery", "Passion", "Harmony", "Elegance", "Serenity", "Balance",
    "Infinity", "Radiance", "Whimsical", "Enigma", "Mystery", "Resilience"
}

def run_c_program(word):
    try:
        result = subprocess.check_output(["./a.out", word], stderr=subprocess.STDOUT, text=True)
        return result.strip()
    except subprocess.CalledProcessError as e:
        return f"Error executing C program: {e.output}"

def main():
    st.title("Spell Check++ Demonstration")
    user_word = st.text_input("Enter a word to check or correct:")

    # Functionality 1: Check when user presses enter
    if st.button("Check") or st.session_state.enter_pressed:
        result = run_c_program(user_word)
        st.write(f"Result: {result}")

    # Functionality 2: Show GitHub repo link
    st.markdown("[GitHub Repo](https://github.com/your-username/your-repo%29)")

    # Functionality 3: Random background word
    background_word = random.choice(list(background_words))
    st.markdown(f'<style>body{{background-color: transparent; background-image: url("https://source.unsplash.com/1920x1080/?{background_word}"); background-size: cover;}}</style>', unsafe_allow_html=True)

if __name__ == "__main__":
    main()
