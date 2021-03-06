// نعمتی

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;
struct dot
{
    int x;
    int y;
};
struct triangle
{
    dot a;
    dot b;
    dot c;
};
void dot_menu(void);
void triangle_menu(void);
void enter_dot(dot *, int);
void move_dot(dot *, int);
void show_dots(dot *, int);
void center_distance(dot *, int);
void betweendots_distance(dot *, int);
void horizontal_angle(dot *, int);
triangle make_a_triangle();
double edge_calculator(dot, dot);
void show_triangle(triangle);
void triangle_perimeter(triangle);
void triangle_area(triangle);
triangle move_triangle(triangle, int, int);
int square(int);
int main()
{

    triangle b;
    char c = 'Y';

    int count1;
    int choice;
    while (c == 'y' || c == 'Y')
    {
        cout << "1.2D Dots Calculations\n2.Triangle Calculations \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            dot_menu();
            break;
        case 2:
            triangle_menu();
            break;
        default:
            printf("Pls enter a valid number!!!");
            break;
        }
        cout << "Do you wanna go back to Main_Menu : ( y / n )\n";
        cin >> c;
        cout << "----------------------------\n";
    }
    return 0;
}
void dot_menu(void)
{
    dot a[100];
    char again = 'Y';
    while (again == 'Y' || again == 'y')
    {
        int choice;
        cout << "----------------------------\n";
        cout << "1.Enter 2D dots\n2.show dots's list\n4.Move Dots\n4.Central distance\n5.distance between 2 dots\n6.Angle with the X's\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int count;
            cout << "How many dots you wanna add(up to 100) : \n";
            cin >> count;
            enter_dot(&a[0], count);
            break;
        case 2:
            show_dots(&a[0], count);
            break;
        case 3:
            move_dot(&a[0], count);
        case 4:
            center_distance(&a[0], count);
            break;
        case 5:
            betweendots_distance(&a[0], count);
            break;
        case 6:
            horizontal_angle(&a[0], count);
            break;
        default:
            printf("Invalid Number !");
            break;
        }
        cout << "Do you wanna go back to Dots_Menu : ( y / n )\n";
        cin >> again;
    }
}
void triangle_menu(void)
{
    int choice;
    char again = 'Y';
    triangle a;
    while (again == 'Y' || again == 'y')
    {
        cout << "----------------------------\n";
        cout << "1.Make a Triangle\n2.Show Triangle Co-Ordinates\n3.Triangle's Perimeter\n4.Triangle's Area\n5.Move a Triangle\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            a = make_a_triangle();
            break;
        case 2:
            show_triangle(a);
            break;
        case 3:
            triangle_perimeter(a);
            break;
        case 4:
            triangle_area(a);
            break;
        case 5:
            int dx, dy;
            cout << "How much you wanna move each Co-Ordinate threw X's : ";
            cin >> dx;
            cout << "How much you wanna move each Co-Ordinate threw Y's : ";
            cin >> dy;
            a = move_triangle(a, dx, dy);
            break;
        default:
            break;
        }
        cout << "Do you wanna go back to Triangle_Menu : ( y / n )\n";
        cin >> again;
    }
}
void enter_dot(dot *a, int count)
{
    cout << "----------------------------\n";
    for (int i = 0; i < count; i++)
    {
        cout << "x(" << i + 1 << ") : ";
        cin >> a[i].x;
        cout << "y(" << i + 1 << ") : ";
        cin >> a[i].y;
    }
    cout << "----------------------------\n";
}
void show_dots(dot *a, int count)
{
    cout << "----------------------------\n";
    for (int i = 0; i < count; i++)
    {
        cout << "dot : (" << a[i].x << "," << a[i].y << ") \n";
    }
    cout << "----------------------------\n";
}
void move_dot(dot *a, int count)
{
    int choice, dx, dy;
    char again = 'Y';
    while (again == 'y' || again == 'Y')
    {
        show_dots(&a[0], count);
        cout << "Pick a Dot to change it's Co-ordinates : ";
        cin >> choice;
        cout << "How much you wanna move it through X's : ";
        cin >> dx;
        a[choice - 1].x += dx;
        cout << "How much you wanna move it through Y's : ";
        cin >> dy;
        a[choice - 1].y += dy;
        cout << "----------------------------\n";
        cout << "Wanna edit again : ( Y/N )\n";
        cin >> again;
    }
}
void center_distance(dot *a, int count)
{
    int choice;
    cout << "Chose a dot to calcuate it's distance from Center (0,0) :\n";
    show_dots(&a[0], count);
    cin >> choice;
    float result = (square(a[choice - 1].x)) + (square(a[choice - 1].y));
    result = sqrt(result);
    cout << "The dot's distance from center is : " << result << "\n";
    cout << "----------------------------\n";
}
void betweendots_distance(dot *a, int count)
{
    int choice1;
    int choice2;
    show_dots(&a[0], count);
    printf("Pick 2 dots to find the space between them : \n");
    printf("your first dot : ");
    scanf("%d", &choice1);
    printf("your second dot : ");
    scanf("%d", &choice2);
    int m = (a[choice1 - 1].x) - (a[choice2 - 1].x);
    int n = (a[choice1 - 1].y) - (a[choice2 - 1].y);
    float result = square(m) + square(n);
    result = sqrt(result);
    cout << "The distance from each other is : " << result << "\n";
    cout << "----------------------------\n";
}
void horizontal_angle(dot *a, int count)
{
    cout << "----------------------------\n";
    int choice;
    show_dots(&a[0], count);
    double tan;
    cout << "Pick a dot to calculate it's angle with X's : ";
    cin >> choice;
    tan = (a[choice - 1].y) / (a[choice - 1].x);
    double angle = atan(tan) * 180 / 3.14159265;
    int X = a[choice - 1].x;
    int Y = a[choice - 1].y;
    if ((X < 0) && (Y > 0))
    {
        angle += 180.00;
    }
    else
    {
        if ((X > 0) && (Y < 0))
        {
            angle += 360.00;
        }
        else
        {
            if ((X < 0) && (Y < 0))
            {
                angle += 180.00;
            }
        }
    }
    cout << "The dot's angle with X's is : " << angle << "\n";
    cout << "----------------------------\n";
}
triangle make_a_triangle()
{
    triangle a;
    cout << "In order to make a triangle , Enter 3 Dots :";
    cout << "\nfirst dot : \n";
    enter_dot(&a.a, 1);
    cout << "\nSecond dot :\n ";
    enter_dot(&a.b, 1);
    cout << "\nThird dot :\n ";
    enter_dot(&a.c, 1);
    double x = edge_calculator(a.b, a.c);
    double y = edge_calculator(a.b, a.a);
    double z = edge_calculator(a.a, a.c);
    if (x + y > z || x + z > y || y + z > x)
    {
        return a;
    }
    else
        return (make_a_triangle());
}
double edge_calculator(dot a, dot b)
{
    double x;
    x = sqrt(square((a.x) - (b.x)) + square((a.y) - (b.y)));
    return x;
}
void show_triangle(triangle a)
{
    show_dots(&a.a, 1);
    show_dots(&a.b, 1);
    show_dots(&a.c, 1);
}
void triangle_perimeter(triangle a)
{
    cout << "----------------------------\n";
    double x = edge_calculator(a.b, a.c);
    double y = edge_calculator(a.b, a.a);
    double z = edge_calculator(a.a, a.c);
    double P = x + y + z;
    cout << "The Triangle's Perimeter is : " << P << "\n";
    cout << "----------------------------\n";
}
void triangle_area(triangle a)
{
    cout << "----------------------------\n";
    double x = edge_calculator(a.b, a.c);
    double y = edge_calculator(a.b, a.a);
    double z = edge_calculator(a.a, a.c);
    double p = (x + y + z) / 2;
    double A = sqrt((p * (p - x) * (p - y) * (p - z)));
    cout << "The Triangle's Area is : " << A << "\n";
    cout << "----------------------------\n";
}
triangle move_triangle(triangle a, int dx, int dy)
{
    a.a.x += dx;
    a.a.y += dy;
    a.b.x += dx;
    a.b.y += dy;
    a.c.x += dx;
    a.c.y += dy;
    return a;
}
int square(int x)
{
    x = (x) * (x);
    return x;
}
