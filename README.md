# 🏥 Hospital Management System

A **terminal-based Hospital Management System** developed in **C** as part of the **Computer System Programming (CSP)** course. The project demonstrates the application of modular programming, file handling, structures, and user authentication to simulate a basic hospital appointment management system.

---

## 📌 Project Overview

The system allows patients to register, log in, and manage doctor appointments through a command-line interface. It uses text files for persistent data storage and follows a modular design by separating different functionalities into independent source and header files.

---

## 🎯 Objectives

* Apply modular programming concepts in C.
* Implement file handling for persistent data storage.
* Design a menu-driven command-line application.
* Practice structures, functions, and header files.
* Develop a real-world application using Computer System Programming concepts.

---

## 🛠️ Technologies Used

* C Programming
* GCC Compiler
* File Handling
* Structures
* Header Files
* Standard C Libraries

---

## 🧩 Key Features

* **Secure User Authentication:** Supports user signup and login with credential verification using file-based storage.
* **Appointment Management:** Book, view, and cancel appointments through an interactive terminal interface.
* **Smart Appointment Scheduling:** Select doctors based on specialization, area, hospital, available dates, and time slots with validation.
* **Persistent Data Storage:** Stores user credentials, doctor information, and appointment records using text files without requiring a database.
* **Modular Design:** Organizes the project into separate source (`.c`) and header (`.h`) files for authentication, appointment handling, and menu management.

---

## 📁 Folder Structure

```text
📦 Hospital-Management-System/
├── 📄 main.c
├── 📄 authentication.c
├── 📄 authentication.h
├── 📄 appointment.c
├── 📄 appointment.h
├── 📄 main_menu.c
├── 📄 main_menu.h
├── 📄 database.txt
├── 📄 users.txt
├── 📄 all_appointments.txt
└── 📄 README.md
```

---

## 🚀 How to Run

1. Compile the source files:

```bash
gcc main.c authentication.c appointment.c main_menu.c -o hospital
```

2. Run the executable:

```bash
./hospital
```

## 👩‍💻 Team

1. DEVANSHI MODI   
2. ZALAK THAKKAR      
3. MOHAMMED TABREZ
4. UTPAL MANGROLIYA
