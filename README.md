# rj-the-great


## C-Strings

C-strings is a null-terminated array of chars.

```c++
char name[20];
```

An array of 20 chars... but to represent a string it needs a terminator, we use `NULL` for that `\0`

```c++
char name[5] = "Anne";
```
In the previous code we have an array of 5 elements

| [0] | [1] | [2] | [3] | [4] | 
| --- | --- | --- | --- | --- |
| 'A' | 'n' | 'n' | 'e' | '\0' |

```c++
char name[5] = "Anne";
for (int i=0; name[i] != '\0'; i++)
    cout << name[i];
cout << endl;

//
cout << name << endl;
```


## C String Functions
To interact with C-Strings is a good idea to use C-String functions, below is a list of the ones you need to know how to use:

- `strcpy`
- `strcat`
- `strcmp`
- `strlen`

You can check the documentation [here](https://cplusplus.com/reference/cstring/).
