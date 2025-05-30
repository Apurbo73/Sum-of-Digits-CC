# Sum-of-Digits-CC:


---

### 🔢 **Purpose of the Program**

The program calculates the **sum of digits** for each number in a series of inputs. For example, if the number is `123`, it adds `1 + 2 + 3 = 6`.

---

### 🧱 **Step-by-Step Breakdown**

1. **Read the number of test cases**

   ```cpp
   int n;
   cin >> n;
   ```

   * The program first takes an integer `n` from the user. This tells how many numbers will be processed.

2. **Loop through each test case**

   ```cpp
   while (n--) {
   ```

   * This loop will run `n` times—once for each number.

3. **Read a number and initialize sum**

   ```cpp
   int a;
   cin >> a;
   int sum = 0;
   int rem = 0;
   ```

   * Reads the number `a`.
   * Initializes `sum` to store the total of the digits.
   * `rem` will store the remainder (i.e., the last digit).

4. **Extract and add digits**

   ```cpp
   while (a > 0) {
       rem = a % 10;      // Gets the last digit
       sum = sum + rem;   // Adds it to the sum
       a = a / 10;        // Removes the last digit
   }
   ```

   * Example for `a = 456`:

     * `456 % 10 = 6`, add to sum → sum = 6
     * `456 / 10 = 45`
     * `45 % 10 = 5`, add to sum → sum = 11
     * `45 / 10 = 4`
     * `4 % 10 = 4`, add to sum → sum = 15
     * `4 / 10 = 0`, loop ends

5. **Output the sum**

   ```cpp
   cout << sum << endl;
   ```

   * Displays the result for the current number.

---

### ✅ Example Input/Output

**Input:**

```
2
123
456
```

**Output:**

```
6
15
```


This C++ program calculates the sum of digits for multiple numbers. First, it reads how many numbers you want to process (`n`). For each number, it extracts each digit using the modulus operator (`% 10`) to get the last digit, adds that digit to a running total (`sum`), and then removes the digit using integer division by 10.

This continues until all digits of the number are processed. After calculating the sum for a number, it prints the result. This process repeats for all `n` test cases. For example, if the input is `123`, it will compute `1 + 2 + 3 = 6` and print that.

