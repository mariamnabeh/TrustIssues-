# 🧱 TrustIssues - README

## 📌 Overview
TrustIssues is a beginner-friendly secure notes system designed to practice **modular software architecture**, **authentication**, **basic cryptography**, and **file storage handling**.

The project focuses on separating responsibilities into independent modules to simulate a real-world secure application.

---

# 🗂️ Project Architecture

```
TrustIssues/
├── main.cpp
│
├── GUI/
│   ├── GUIManager.h
│   ├── GUIManager.cpp
│
├── Auth/
│   ├── AuthManager.h
│   ├── AuthManager.cpp
│
├── Crypto/
│   ├── CipherEngine.h
│   ├── CipherEngine.cpp
│
├── Storage/
│   ├── StorageMaster.h
│   ├── StorageMaster.cpp
│
├── Utils/
│   ├── Utils.h
│   ├── Utils.cpp
│
├── Data/
│   ├── vault.bin
│   ├── users.bin
```

---

# 🔄 System Flow

## 👤 Full Application Flow
```
User
 ↓
GUI
 ↓
main.cpp
 ↓
AuthManager
 ↓
Crypto (CipherEngine)
 ↓
StorageMaster
 ↓
Data/
```

---

## 📝 Add Note Flow
```
User writes note
 ↓
GUI sends input
 ↓
main.cpp receives request
 ↓
CipherEngine encrypts note
 ↓
StorageMaster saves encrypted data
 ↓
Data/vault.bin updated
```

---

## 📖 View Note Flow
```
StorageMaster reads encrypted data
 ↓
CipherEngine decrypts data
 ↓
GUI displays plain text to user
```

---

# 🧠 Critical Thinking (System Design View)

## 👤 1) User Perspective
- User logs in or registers
- User can add/view notes
- User never sees encryption or storage logic

---

## ⚙️ 2) System Perspective
- GUI collects input
- main.cpp controls program flow
- Each module handles its own responsibility

---

## 📦 3) Data Perspective
- Raw data NEVER stored directly
- Notes are encrypted before storage
- Data stored inside binary files only

---

## 🔐 4) Security Perspective
| Component | Knows | Does NOT know |
|----------|------|---------------|
| GUI | UI only | encryption / files |
| Auth | users | storage details |
| Crypto | data encryption | user identity |
| Storage | file handling | data meaning |

---

# 🧱 Design Principles

- Separation of Concerns
- Modular Architecture
- Data Isolation
- Security by Design (basic level)

---

# ⚠️ Rules

- GUI must NOT contain business logic
- Auth must NOT directly access files
- Crypto must NOT know user system
- Storage must NOT interpret data

---

# 🚀 Learning Goals

This project helps you understand:
- System design basics
- Modular programming in C++
- Authentication concepts
- Simple encryption usage
- File handling in binary systems

---

# 💡 Summary
TrustIssues simulates a small secure system where:
- Every module has ONE responsibility
- Data flows through controlled layers
- Security is applied step-by-step

---

🔥 End of README

