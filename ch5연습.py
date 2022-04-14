# v = 'expr'
# print(type('obj'))
# print(type(123))
# print(type(12.3))
# print(type('this'))
# print(type([1, 2, 3]))
# print(type((1, 2, 3)))
# print(type({'name' : 'kim', 'age' : '20'}))
# def f(x, y):
#     return (x+y)

# print(type(f))

# import math
# print(type(math))

# import math
# print(f'the value of pi is approximately {math.pi:.4f}.')



print(1 == 1.0) # 값이 같으니까 True
print(1 is 1.0) # 정수와 실수라는 점에서 차이가 있으니 False

x = 1; y = 1.0
print(id(x), id(y)) #참조 값이 다르니 주소도 다르게 출력될 것임
print(id(x) == id(y)) #False

z = 1; w = z
print(id(z), id(w)) #동일한 객체이니 주소가 같게 출력될 것임
print(id(z) == id(w)) #True