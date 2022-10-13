#include <iostream>
using namespace std;
int arr[2000];
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int insert(int arr[], int pos, int ele, int n)
{
    if (pos - 1 > n)
    {
        cout << "Insertion is not possible" << endl;
        return n;
    }
    else if (pos - 1 == n)
    {
        arr[pos - 1] = ele;
        n++;
        return n;
    }
    else
    {
        for (int i = n - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = ele;
        n++;
    }
    return n;
}

int search(int arr[], int n, int ele)
{
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            pos = i + 1;
            break;
        }
    }
    return pos;
}

int remove(int arr[], int n, int ele)
{
    int pos = search(arr, n, ele);
    if (pos == -1)
    {
        cout << "Deletion is not possible" << endl;
        return n;
    }
    else
    {
        for (int i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    return n;
}

void update(int arr[], int n, int ele, int pos)
{
    if (pos - 1 < n)
    {
        arr[pos - 1] = ele;
    }
    else
    {
        cout << "Updation of element is not possible" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the initial size of array: ";
    cin >> n;
    cout << "Enter the initial elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (true)
    {
        int action;
        cout << "1 -> Insert\n2 -> Display\n3 -> Delete\n4 -> Search\n5 -> Update\n0 -> Exit\n";
        cin >> action;
        if (action == 0)
        {
            break;
        }
        switch (action)
        {
        case 1:
            int pos, ele;
            cout << "Enter the position and the element: ";
            cin >> pos >> ele;
            n = insert(arr, pos, ele, n);
            break;
        case 2:
            display(arr, n);
            break;
        case 3:
            int pos1;
            cout << "Enter the element you want to delete: ";
            cin >> pos1;
            n = remove(arr, n, pos1);
            break;
        case 4:
        {
            int ele1;
            cout << "Enter the element you want to find out from the array: ";
            cin >> ele1;
            int position = search(arr, n, ele1);
            if (position != -1)
            {
                cout << "The element is present at postion: " << position << endl;
            }
            else
            {
                cout << "The element is not present in the array" << endl;
            }
        }
        break;
        case 5:
            int pos2, ele2;
            cout << "Enter the position of the element and updated value of it: ";
            cin >> pos2 >> ele2;
            update(arr, n, ele2, pos2);
            break;
        case 0:
            cout << "Exiting from the program" << endl;
            break;
        }
    }
    return 0;
}