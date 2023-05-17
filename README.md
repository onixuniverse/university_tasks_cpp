# university_tasks_cpp

✅ ~~1.25 Составьте программу для проверки, можно ли заданное натуральное число представить в виде: а) квадрата какого-либо простого числа; б) произведения трех простых чисел.~~
---
✅ ~~1.40 Даны целое число k, 1 < k < 180 и последовательность цифр 10111213...9899, в которой выписаны подряд все двузначные числа. Определить k-ю цифру в этой последовательности.~~
---
✅ ~~2.25 Среди треугольников с вершинами в заданном множестве точек на плоскости указать такой, стороны которого содержат максимальное число точек заданного множества.~~
---
✅ ~~3.25 Будем рассматривать только строки, состоящие из заглавных английских букв. Например, рассмотрим строку AAAABCCCCCDDDD. Длина этой строки равна 14. Поскольку строка состоит только из английских букв, повторяющиеся символы могут быть удалены и заменены числами, определяющими количество повторений. Таким образом, данная строка может быть представлена как 4AB5C4D. Длина такой строки 7. Описанный метод мы назовем упаковкой строки. 
Напишите программу, которая берет упакованную строку и восстанавливает по ней исходную строку.~~
---
~~✅ 3.50 Для шифрования слов с ними можно производить множество различных операций. Например, интересна такая операция: первые несколько букв заданного слова приписываются к его концу в обратном порядке, после чего удаляются из начала слова. При этом слово a1a2 … akak+1 … an переходит в слово ak+1 … anakak-1 … a1 (число k выбирается в диапазоне от 0 до n). 
Для двух заданных слов требуется определить, можно ли применением описанной операции преобразовать первое слово во второе. 
В ответе вывести “Yes», если преобразование возможно, и «No», если нет. В случае положительного ответа во второй строке выведите k – длину перемещаемой части исходного слова k (из всех таких k выберите минимальный). Примеры: Дано: (Результат:) wpwdwpw (Yes), wdwpwpw (2), dWOddWd (No), dOdWdWd ()~~
---
~~✅ 4.25 Приняв способ изображения рационального числа в виде структуры с двумя полями целого типа, написать программу, позволяющую: 1) определить, есть ли среди 50 рациональных чисел равные; 2) вычислить наибольшее из данных рациональных чисел.~~
---
~~✅ 4.37 Дана дата (число, месяц, год и день недели). Определите правильность заданной даты; какой день недели приходится на последний день данного месяца.~~
---
~~✅ 5.25 Составьте банк данных районного отдела милиции, включающий в себя фамилию, имя и отчество нарушителя, дату рождения, и в зависимости от поля «Судимость» наличие соответствующей дополнительной информации по своему усмотрению (например, наличие клички, мера наказания, срок заключения). Информацию о каждом нарушителе оформите в программе в виде записи с вариантами. Совокупность записей объедините в массив. Составьте программу, которая обеспечивает ввод полученной информации, распечатку ее в виде таблицы. Выведите на экран меню, а затем информацию в зависимости от вашего запроса.~~
---
~~✅ 6.25 Дан символьный файл f. Предполагается, что длина одного слова не превосходит десяти и что число слов делится на 100. Подготовить файл для печати слов в две колонки по пятьдесят строк на странице. Слова должны быть размещены в файле f1 в следующем порядке: 1-е слово, 51-е слово, 2-е слово, 52-е слово, ..., 50-е слово, 100-е слово, затем (следующая страница) 101-е слово, 151-е слово, ..., 150-е слово, 200-е слово и т.д.~~
---
~~✅ 6.50 Прямая на плоскости задается уравнением ах + bу + с = 0, где а и b одновременно не равны нулю. Будем рассматривать только прямые, для которых коэффициенты а, b, с — целые числа. Пусть f — файл, содержащий коэффициенты нескольких прямых (не менее трех). Переписать из файла f в файл g коэффициенты тех прямых, которые:
а) параллельны первой из прямых, заданной в файле f;
б) указаны в а), но дополнительно требуется, чтобы все прямые были различны;
в) пересекают первую из прямых, заданных в файле f;
г) указаны в в), но дополнительно требуется, чтобы среди прямых не было параллельных.
---
✅ 7.25 Построить графики функций, самостоятельно выбрать удобные параметры настройки.
![image](https://user-images.githubusercontent.com/48064744/221347876-72f750dc-bd92-4d63-9e32-2a1c45e216fd.png)~~
---
30.	Сериализация и десериализация данных в формате XML. Напишите программу, сохраняющую список фильмов в файл XML и читающую этот список обратно. Для каждого фильма определены: числовой идентификатор, название, год выхода на экраны, продолжительность в минутах, список режиссеров, список сценаристов и список главных ролей с именами актеров. Вот как мог бы выглядеть такой файл XML:
```<?xml version="1.0"?>
<movies>
<movie id="9871" title="Forrest Gump" year="1994" length="202">
<cast>
<role star="Tom Hanks" name="Forrest Gump" />
<role star="Sally Field" name="Mrs. Gump" />
<role star="Robin Wright" name="Jenny Curran" />
<role star="Mykelti Williamson" name="Bubba Blue" />
</cast>
<directors>
<director name="Robert Zemeckis" />
</directors>
<writers>
<writer name="Winston Groom" />
<writer name="Eric Roth" />
</writers>
</movie>
<!--другие элементы movie -->
</movies>```
---
Замечания.
- 1-й раздел: для одной задачи создать консольное приложение, а для второй – Windows Forms.
- 2-й раздел: консольное приложение, для размещения элементов массива резервировать память в «куче».
- 3-й раздел: для одной задачи создать консольное приложение, а для второй – Windows Forms.
- 4-й раздел: для одной задачи создать консольное приложение, а для второй – Windows Forms.
- 5-й раздел: Windows Forms.
- 6-й раздел: для одной задачи создать консольное приложение, а для второй – Windows Forms.
- 7-й раздел: Windows Forms.
