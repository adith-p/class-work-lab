fruit = {'name':'hello','age':25,
         'poke': {'pokemon':'bulbasaur'}}

for key in fruit.keys():
    print(key)

for value in fruit.values():
    print(value)

fruit['name'] = 'adith'
fruit['name'] = 'pokemon'

print(fruit)

print(fruit.items())


for key in fruit.keys():
    print(fruit[key])
