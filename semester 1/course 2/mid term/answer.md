## Answer Script

1. Explain Stack and Heap memory.

    Stack memory is the default place where all the variables and data get saved when we create them. Stack memory is compile time memory which means it allocates just the exact amount of memory needed for the program in the compile time. We can’t change or increase the amount of memory in runtime or once after declaring the memory needed. It deletes data just when its use is done. ie. it deletes all the data created inside a function after the function gets returned. It is also called static memory allocation.

    Example:
    ```cpp
    #include <iostream>
    using namespace std;

    int main()
    {
        int arr[4] = {1, 13, 4, 5};
    }
    ```
    Here, an array with 4 elements is declared, we can’t change the size of of the array after this.

    Heap memory is runtime memory, that means it allows allocating memory at runtime and so it allows to change and delete amount of memory. Also it keeps the data created inside a function even after the function gets returned. Heap memory is also called dynamic memory allocation.

2. Why do we need dynamic memory allocation? Explain with examples.

    Sometimes we start our program with a data but then we need to increase the amount of it. With stack memory it is not possible, furthermore we sometimes need to copy our data into another data structure or variable, and then the first data remains of no use. With stack memory or static memory allocation we cannot delete it. So, it stays there and consumes memory. But with heap memory or dynamic memory allocation we can increase the amount of memory and we can also delete the data that we don’t need. Also it saves the data that we create inside function which stack removes once the function has returned.

    Example:
    
    Stack
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {
        //stack
        int arr[4] = {1, 2, 3, 4};


        int ar[5];
        int i = 0;
        for(; i < 5; i++)
        {
            ar[i] = arr[i];
        }


        ar[i] = 5;
    }
    ```
    Heap
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {
        int *a = new int[4];
        for(int i = 0; i < 4; i++)
        {
            a[i] = i + 1;
        }    


        int arx[5];


        int i = 0;
        for(; i < 5; i++)
        {
            arx[i] = a[i];
        }
        arx[i] = 5;


        delete[] a;
    }
    ```

3. How to create a dynamic array? What are the benefits of it?

    We can create dynamic array in the following manner:
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {
        int *a = new int[4];
        for(int i = 0; i < 4; i++)
        {
            a[i] = i + 1;
        }
        
    }
    ```

    Benefits:
    - We can increase the amount of memory.
    - We can delete the array.
    - We can return the array as a pointer from a function.

4. How does class and object work? How to declare an object?

    A class is like a blueprint with which we can create different objects that will have a set of attributes and methods which may not be identical but the structure will be identical. For example, we can have a blueprint for a car- it will have windows and a speed. Now, with this blueprint we can create different cars with different windows and different speed.

    ```cpp
    #include <bits/stdc++.h>
    using namespace std;


    class Car
    {
        public:
            int windows;
            int speed;
    };


    int main()
    {
        Car lambo;
        lambo.windows = 4;
        lambo.speed = 1500;
    }
    ```
    Here, we create a class called Car. We use access modifier public so that other functions can access the attributes. Then in the main function we create a object lambo where we set the windows to 4 and speed to 1500. For creating the object we first write the name of the class which is Car then we write the variable name which lambo.

5. What is a constructor and why do we need this? How to create a constructor show with an example.

    Constructor is a special function that can be only created inside a class, it needs to have the exact same name as the class and it can’t have a return type. This function is used to take the values for the attributes of the class and to set them. 

    Example:
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;


    class Car
    {
        public:
            int windows;
            int speed;
    
            Car(int w, int s)
            {
                windows = w;
                speed = s;
            }
    };


    int main()
    {
        Car lambo(4, 1500);
    }
    ```

6. Create a class named **Person** where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor.

    ```cpp
    #include <bits/stdc++.h>
    using namespace std;


    class Person
    {
        public:
            char name[100];
            float height;
            int age;


            Person(char *n, float h, int a)
            {
                strcpy(name, n);
                height = h;
                age = a;
            }
    };


    int main()
    {
        char name1[100] = "Sam";
        Person* sam = new Person(name1, 5.10, 17);  
    }
    ```

7. What is the size that an object allocates to the memory?
 
    The object allocates the size that is equal to the sum of all its included data types.

    Example:
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;


    class Person
    {
        public:
            float height;
            int age;


            Person(float h, int a)
            {
                height = h;
                age = a;
            }
    };


    int main()
    {
        Person* sam = new Person(5.10, 17);  
    }
    ```
    Here the object sam allocates 4 + 4 = 8 bytes because of having a float which is equal to 4 bytes and a integer which is again equal to 4 bytes.

8. Can you return a static object from a function? If yes, show with an example.

    Yes. We can.
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;


    class Person
    {
        public:
            char name[100];
            float height;
            int age;


            Person(char *n, float h, int a)
            {
                strcpy(name, n);
                height = h;
                age = a;
            }
    };


    Person return_person()
    {
        char name[100] = "Sam";
        Person sam = Person(name, 5.10, 17);
        return sam;
    }


    int main()
    {
        Person kam = return_person();
        cout << kam.age;
    }
    ```

9. Why do we need -> (arrow sign)?

    We need -> sign to get access to different attributes of a dynamic object. We save a pointer to dynamic object when we declare it. So if we have a dynamic object called “sam” which has an attribute called “age” then to access it we need to write the following- (*sam).age
    
    But it is a bit difficult to write that. So we instead use -> sign which let us access the attribute we need. We write it in the following way- sam->age.

10. Create two objects of the **Person** class from question and initialize them with proper value. Now compare whose age is greater, and print his/her name.
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;


    class Person
    {
        public:
            char name[100];
            float height;
            int age;


            Person(char *n, float h, int a)
            {
                strcpy(name, n);
                height = h;
                age = a;
            }
    };


    int main()
    {
        char name1[100] = "Sam";
        char name2[100] = "Fam";
        Person* sam = new Person(name1, 5.10, 17);
        Person* fam = new Person(name2, 5.6, 15);


        (sam->age > fam->age) ? cout << sam->name : cout << fam->name;
    }
    ```