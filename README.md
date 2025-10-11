<img width="1280" height="657" alt="buildc++" src="https://github.com/user-attachments/assets/7a4d0f13-8349-45f4-b28e-117571acdd63" />

# 🧠 C++ CI/CD Demo using CMake and GitHub Actions

This project demonstrates how to set up a **C++ application** built with **CMake** and automated using **GitHub Actions** for continuous integration (CI).

## ⚙️ Tech Stack
- **Language:** C++ (C++17)
- **Build System:** CMake
- **CI/CD:** GitHub Actions
- **Platform:** Ubuntu (for builds)

## 🚀 Features
- Automated build pipeline triggered on push or pull request  
- Simple and modular CMake structure  
- Extendable to include testing frameworks (e.g., GoogleTest)

## 🧩 Folder Structure
<img width="208" height="252" alt="image" src="https://github.com/user-attachments/assets/13b93e1b-ed01-489b-bafe-835082702bbc" />

## 🔄 Workflow Overview
1. Checks out repository  
2. Installs CMake & g++  
3. Builds the project  
4. Runs executable

## 🧪 Run Locally
```bash
mkdir build
cd build
cmake ..
make
./app

