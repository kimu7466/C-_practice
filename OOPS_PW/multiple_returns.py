### mutiple returns
### 1. using a tuple


### unpacking the retuned tuple
# def p_info():
#     name = "imroz khan"
#     age = 25
#     email = "imroz@gmail.com" 

#     return name, age, email

# naam , umar, mail = p_info()

# print(naam, umar, mail)

# info = p_info()

# print(info)

# for i in info:
#     print(i)



### Indexing the Returned Tuple

# info = p_info()

# name = info[0]
# age = info[1]
# mail = info[2]

# print(name, "\n"+str(age), "\n"+mail)

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

### 2. Using a Dictionary

# def p_info():
#     name = "imroz khan"
#     age = 25
#     email = "imroz@gmail.com" 


#     return {
#         "name": name,
#         "age": age,
#         "email": email
#     }

# info = p_info()

# print(info['name'])  
# print(info['age'])   
# print(info['email']) 

# print(type(info))


#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

### 3. Using a Custom Class

class PersonInfo:
    def __init__(self, name, age, email):
        self.name = name
        self.age = age
        self.email = email

def p_info():
    return PersonInfo("imroz khan", 25, "imroz@gmail.com")

# Access the values using attributes
info = p_info()

print(info.name)   # imroz khan
print(info.age)    # 25
print(info.email)  # imroz@gmail.com
