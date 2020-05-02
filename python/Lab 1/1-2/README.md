# 1-2: BMI Calculator
## Task Description
In this task, we develop a Body Mass Index (BMI) Calculator that can be used to calculate your BMI value and weight status while taking your age into consideration. Use the "metric units" tab if you are more comfortable with the international standard metric units. The referenced weight range and calculation formula is listed below.

## Requirements
1.  Allow users to run your program with three input arguments by passing three values to the program: the choice of units, height and weight.
2.  Your program will read the three arguments and calculate BMI using the following two formulas:
```
Metric Units: BMI = weight(kg)/height^2(m^2)
U.S. Units: BMI = 703·weight(lb)/height^2(in^2)
```
3.  After user inputs all the numbers, if the input numbers are invalid, you need to present an error message “Your input is invalid!”. Otherwise, you need to print out BMI and category. The output payment requires to have 2 precisions. For instance, if BMI is 23.456, it should print 23.45. If BMI is 23, it should print 23.00.
> NOTE: The formulas to calculate BMI are based on two of the most commonly used unit systems.

## Reference
Your BMI is a measurement of your body weight based on your height and weight. Although your BMI does not actually "measure" your percentage of body fat, it is a useful tool to estimate a healthy body weight based on your height. Due to its ease of measurement and calculation, it is the most widely used diagnostic indicator to identify a person's optimal weight depending on his height. Your BMI "number" will inform you if you are underweight, of normal weight, overweight, or obese. However, due to the wide variety of body types, the distribution of muscle and bone mass, etc., it is not appropriate to use this as the only or final indication for diagnosis.

## BMI Table for Adults
This is the World Health Organization's (WHO) recommended body weight based on BMI values for adults. It is used for both men and women, age 18 or older.

| Category          | BMI range - kg/m<sup>2</sup> |
|:-----------------:|:-----------------:|
| Severe Thinness   | < 16              |
| Moderate Thinness | 16 - 17           |
| Mild Thinness     | 17 - 18.5         |
| Normal            | 18.5 - 25         |
| Overweight        | 25 - 30           |
| Obese Class I     | 30 - 35           |
| Obese Class II    | 35 - 40           |
| Obese Class III   | > 40              |

## NOTE
1.  You have to strictly follow the input and output format.<br>
2.  `%0.2f\tSevere Thinness` should be used.

## Example
```
$ python2 BMICalculatorTest.py metric 1.80 78
24.07   Normal
$ python2 BMICalculatorTest.py metric 1.78 48
15.15   Severe Thinness
$ python2 BMICalculatorTest.py metric 1.60 126
49.22   Obese Class III
$ python2 BMICalculatorTest.py imperial 68.90 154.32
22.85   Normal
$ python2 BMICalculatorTest.py imperial 85.63 135.68
13.01   Severe Thinness
$ python2 BMICalculatorTest.py abc
Your input is invalid!
```