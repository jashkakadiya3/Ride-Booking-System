# 🚗 Ride Booking & Dispatch System (C++ - DSA Project)

A console-based Ride Booking System built in C++ that demonstrates core **Data Structures and Algorithms (DSA)** concepts such as Queue, Stack, Priority Queue, Sorting, and Binary Search.


## 📌 Features

* Add and manage drivers
* Request rides (Normal & VIP)
* Assign drivers to rides
* VIP rides handled with priority
* Complete rides and store history
* Sort ride history
* Search rides using Binary Search


## 🧠 Data Structures Used

| Feature                    | Data Structure |
| -------------------------- | -------------- |
| Drivers storage            | Vector         |
| Normal ride requests       | Queue (FIFO)   |
| VIP ride requests          | Priority Queue |
| Undo / last assigned rides | Stack (LIFO)   |
| Ride history               | Vector         |
| Sorting                    | STL sort()     |
| Searching                  | Binary Search  |


## ⚙️ How It Works

* **Normal rides** are processed in FIFO order using Queue
* **VIP rides** are processed first using Priority Queue
* **Drivers** are assigned from available list
* **Completed rides** are stored in history
* **Sorting** is required before performing Binary Search


## ▶️ Menu Options

1. Add Driver
2. Request Ride
3. Assign Driver
4. Complete Ride
5. Show Ride History
6. Sort Rides
7. Search Ride (Binary Search)
8. Exit


## 💻 Sample Output

```
RIDE BOOKING SYSTEM (VIP)

1. Add Driver
Enter Driver ID: D1
Driver added

2. Request Ride
Enter Ride ID: R101
Enter type (1 = VIP, 0 = Normal): 1
VIP Ride requested

3. Assign Driver
Driver D1 assigned to Ride R101

4. Complete Ride
Ride R101 completed
```

---

## ⚠️ Important Note

Binary Search works only on **sorted data**.
So always:

```
Complete Ride → Sort Rides → Search Ride
```

---

## ⏱️ Time Complexity

| Operation             | Complexity |
| --------------------- | ---------- |
| Add Driver            | O(1)       |
| Request Ride (Normal) | O(1)       |
| Request Ride (VIP)    | O(log n)   |
| Assign Driver         | O(log n)   |
| Complete Ride         | O(1)       |
| Sorting               | O(n log n) |
| Binary Search         | O(log n)   |

---

## 🧪 Test Cases

### ✅ Normal Cases

* Add multiple drivers and rides
* Assign and complete rides
* Sort and search rides

### ⚠️ Edge Cases

* No drivers available
* No rides available
* Search without sorting
* Empty ride history
* Duplicate ride IDs

---

## 🚀 Future Improvements

* Use `unordered_map` for O(1) searching
* Add driver availability tracking
* Add ride details (time, distance, cost)
* Implement distance-based driver selection
* GUI version using C++ or web

---

## 🎯 Learning Outcomes

* Practical understanding of **DSA concepts**
* Real-world application of Queue, Stack, and Priority Queue
* Efficient searching and sorting techniques
* Time and space complexity analysis

---

## 👨‍💻 Author

* Name: Jash Kakadiya
* Course: Data Structures & Algorithms (DSA)
* Language: C++

---

⭐ If you like this project, give it a star!
