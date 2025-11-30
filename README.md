🧭Introduction

This is our group's PPS project where we made Smart Agriculture Crop Suggestion System that suggests suitable crops to farmers based on soil type, rainfall, and temperature, using arrays, structures, functions, pointers, and file handling.

📌 Project Overview

The Smart Agriculture Crop Suggestion System is a C-based application designed to help farmers choose the most suitable crops based on soil type, rainfall, and temperature.
It uses intelligent decision logic, file-based crop storage, and modular programming to simulate a real agriculture advisory system.

This project follows a three-member modular structure, each contributing with separate C modules.

🎯 Features :-

✔ Input soil type, average rainfall, and temperature

✔ Suggest crops based on predefined conditions

✔ Crop details stored in arrays of structures

✔ Uses decision-making and modular functions

✔ Employs dynamic memory allocation using pointers

✔ Loads crop data using file handling

✔ Provides seasonal suggestions

✔ Easy-to-understand modular code (3 member contributions)


📚 Concepts Used

This project applies major C programming topics:-

⭐Arrays

⭐Structures

⭐Functions

⭐Conditional Statements

⭐Pointers & Dynamic Memory (malloc)

⭐File Handling (fopen, fscanf, etc.)

⭐Modular Programming



System Architecture

                                ┌──────────────────┐
                                │  User Input      │
                                └──────┬───────────┘
                                       │ Soil, Rainfall, Temperature
                                       ▼
                                 ┌──────────────────┐
                                 │ Crop Database    │ <- Loaded dynamically from file
                                 └───────┬──────────┘
                                         │
                                         ▼
                        ┌─────────────────────────────┐
                        │ Decision Logic + Matching   │
                        │ - Soil filtering            │
                        │ - Rainfall range matching   │
                        │ - Temperature validation    │
                        └───────┬─────────────────────┘
                                │
                                ▼
                       ┌───────────────────────┐
                       │ + Recommendations     │
                       │ + Yield estimation    │
                       │ + Seasonal suggestion │
                       └───────────────────────┘

🛠 Advanced Features (Future Enhancements)

You can add this to impress teachers and evaluators:

🔹 Integrate real-time weather API

🔹 Machine learning-based crop prediction

🔹 GUI using GTK or web-based front-end

🔹 Soil nutrient-level analysis

🔹 More crop parameters (water demand, pest risk) 

🔹 Mobile app version



🚀 How to Run the Project

✅ 1. Make sure all files are in ONE folder

✅ 2. Install a C Compiler (if not already installed)

✅ 3. Open Terminal / CMD / VS Code Terminal

✅ 4. Compile All Files Together

✅ 5. Run the Program

✅ 6. (Optional) Save Output to a File



