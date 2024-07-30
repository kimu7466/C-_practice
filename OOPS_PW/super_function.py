# # class parent:
# #     def parent_method(self):
# #         print("parent method called")

# # class child(parent):
# #     def parent_method(self):
# #         print("child method called")
# #         # super().parent_method()

# # class gchild(child):
# #     def parent_method(self):
# #         print("gchild method called")
# #         super().parent_method()

# # obj = gchild()

# # obj.parent_method()

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

# class Employee:
#     def __init__(self, id, name):
#         self.id = id
#         self.name = name 

# class Programmer:
#     def __init__(self, id, name, lang):
#         self.id = id
#         self.name = name 
#         self.lang = lang 


# aadil = Employee(1001, "aadil khan")
# imroz = Programmer(2002, "imroz khan", "python")

# print(aadil.name)
# print(imroz.name)

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

# above example with super keyword 

class Employee:
    def __init__(self, id, name):
        self.id = id
        self.name = name 

class Programmer(Employee):
    def __init__(self, id, name, lang):
        super().__init__(id , name)
        self.lang = lang 


aadil = Employee(1001, "aadil khan")
imroz = Programmer(2002, "imroz khan", "python")

print(aadil.name)
print(imroz.lang)



