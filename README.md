# 🍽️ Techies Hotel Management System (C)

A simple ""console-based Hotel Management System"" developed in C programming**. This project simulates a restaurant ordering system where customers can browse the menu, place multiple orders, and generate a final bill with GST.

---

## 📌 Features

- 📋 Menu-driven interface
- 🥗 Separate menus for:
  - Starters
  - Main Course
  - Desserts
- 🔄 Users can order multiple items
- ➕ Quantity selection for each item
- 🧾 Automatic bill generation
- 💰 GST (18%) calculation
- 🧮 Displays item-wise receipt with quantities and prices

---

## 🍴 Menu

### Starters
- Chicken 65 – ₹120
- Paneer Tikka – ₹100
- Pasta – ₹90

### Main Course
- Hyderabadi Biryani – ₹320
- Paneer Biryani – ₹300
- Dal Makhani – ₹75

### Desserts
- Gulab Jamun – ₹35
- Rasmalai – ₹45
- Ice Cream – ₹20

---

## ⚙️ Technologies Used

- C Programming
- GCC Compiler
- Standard C Library (`stdio.h`)

---

## 🚀 How to Run

### Compile

```bash
gcc hotel_managemen.c -o hotel
```

### Execute

```bash
./hotel
```

For Windows:

```bash
hotel.exe
```

---

## 📂 Project Structure

```
Hotel-Management-System/
│
├── hotel_management.c
└── README.md
```

---

## 📖 Program Flow

1. Display the main menu.
2. User selects a category.
3. Choose food items.
4. Enter quantity.
5. Repeat ordering if required.
6. Exit menu.
7. Generate receipt.
8. Calculate GST (18%).
9. Display final bill.

---

## 📸 Sample Output

```
*********** Welcome to Techies Hotel ***********

1. Starter
2. Main Course
3. Dessert
4. Exit Menu

Please Enter your choice: 2

Hyderabadi Biryani
Price: 320 Rs
Quantity: 2

...

-------- YOUR RECEIPT --------

Hyderabadi Biryani  x2   640 Rs

Gross Total         640
GST (18%)           115.20
Total Bill          755.20 Rs
```

---

## 🎯 Learning Outcomes

This project helped in understanding:

- Switch-case statements
- Nested `do-while` loops
- User input handling
- Conditional statements
- Arithmetic operations
- Billing system implementation
- Modular menu-driven programming

---

## 🔮 Future Improvements

- Store orders using arrays or structures
- File handling for bill storage
- Admin panel for updating menu
- Discount coupons
- Customer details
- Table booking
- Payment options (UPI/Card/Cash)
- Better formatted invoice

---

## 👨‍💻 Author

Narasimha S

⭐ If you found this project useful, consider giving it a star!
