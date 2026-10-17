# 💡 Dual LED Pattern Player with Arrays

> **Arduino Project #25** — LEDان يومضان بأنماط محددة مسبقاً من مصفوفتين باستخدام دالة blink()

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يُشغّل LEDين بأنماط وميض مخزنة في مصفوفتين:

- `b1[]` تحدد عدد ومضات LED1 في كل جولة
- `b2[]` تحدد عدد ومضات LED2 في كل جولة
- يمر على 4 جولات بالتسلسل — في كل جولة يومض LED1 ثم LED2
- كل ذلك مرة واحدة في `setup()` عبر دالة `blink()` مخصصة

---

## 🔌 Circuit

```
Arduino UNO
┌─────────────────┐
│             2 ●─┼──[220Ω]──💡 LED 1 ── GND
│             3 ●─┼──[220Ω]──💡 LED 2 ── GND
└─────────────────┘
```

- 💡 LED 1 على Pin 2 مع مقاومة 220Ω
- 💡 LED 2 على Pin 3 مع مقاومة 220Ω

---

## 💡 Concepts Used

- **مصفوفتان** `b1[]` و `b2[]` — لتخزين أنماط الومضات مسبقاً
- **Custom Function** `blink(int p, int t)` — تأخذ رقم الـ pin وعدد الومضات
- `for loop` — للمرور على الجولات الأربع وداخل دالة `blink()`
- `delay()` — للتحكم بمدة كل ومضة (300ms)

---

## 📊 Behavior

| الجولة | LED1 (pin 2) | LED2 (pin 3) |
|--------|-------------|-------------|
| 1 | 2 ومضات | 2 ومضات |
| 2 | 3 ومضات | 3 ومضات |
| 3 | 2 ومضات | 3 ومضات |
| 4 | 3 ومضات | 2 ومضات |

---

## 🔗 Code

```cpp
int LED1 = 2;
int LED2 = 3;
int D = 300;
int b1[] = {2, 3, 2, 3};
int b2[] = {2, 3, 3, 2};

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  for (int i = 0; i < 4; i++) {
    blink(LED1, b1[i]);
    blink(LED2, b2[i]);
  }
}

void loop() {
}

void blink(int p, int t) {
  for (; t > 0; t--) {
    digitalWrite(p, 1);
    delay(D);
    digitalWrite(p, 0);
    delay(D);
  }
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل LEDين على pin 2 و pin 3 مع مقاومة 220Ω لكل منهما
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. راقب LEDين يومضان بالأنماط المحددة في المصفوفتين

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
