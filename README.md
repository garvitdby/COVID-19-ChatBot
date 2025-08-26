# COVID-19-ChatBot
A chatbot that provides information on hospitals, home care, and food/medicines. Users can select a topic, view questions, and get answers. Includes admin feature to add new Q&amp;A pairs to text files. Built with C.

## Features
- **Topic Selection**: Choose from three healthcare categories:
  - Hospitals
  - Home Care
  - Food and Medicines
- **Interactive Q&A**: Browse available questions and get instant answers.
- **Admin Mode**: Add new questions and answers to the system's knowledge base.
- **User-Friendly Interface**: Clean console interface with color-coded messages.

## How It Works
1. The program starts by presenting a menu of healthcare topics.
2. Users select a topic to view a list of pre-defined questions.
3. After viewing questions, users can:
   - Enter a question number to receive the corresponding answer
   - Press '0' to add a new question/answer pair (admin feature)
4. New questions are saved to text files for future sessions.

## File Structure
COVID-19 Chatbot - Root folder
- Hospital.txt - Hospital-related questions
- Hospitalans.txt - Corresponding answers
- Homecare.txt - Home care questions
- Homecareans.txt - Corresponding answers
- Foodmed.txt - Food & medicine questions
- Foodmedans.txt - Corresponding answers
- version 1 - c++ source file
- version 1.exe - Compiled executable

## Application ScreenShots
**Main Menu Interface**
https://github.com/garvitdby/COVID-19-ChatBot/blob/main/Add%20Question.png

**QNA**
https://github.com/garvitdby/COVID-19-ChatBot/blob/main/QNA.png

**Adding Question**
https://github.com/garvitdby/COVID-19-ChatBot/blob/main/Add%20Question.png

## Technology Stack
- **Language**: C  
- **Libraries**: `stdio.h`, `conio.h`, `stdlib.h`, `string.h`, `windows.h`  
- **Storage**: Text-based file system for data persistence  

## Note
This is a console-based application designed for **Windows systems**.  
The use of `conio.h` and `windows.h` headers makes it platform-specific.  
For cross-platform compatibility, these would need to be replaced with platform-agnostic alternatives.
