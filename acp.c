def draw_line(length):
    print("*" * length)

def draw_rectangle(width, height):
    for i in range(height):
        if i == 0 or i == height - 1:
            print("*" * width)
        else:
            print("*" + " " * (width - 2) + "*")

def draw_triangle(height):
    for i in range(1, height + 1):
        print("*" * i)

def draw_circle(radius):
    for y in range(-radius, radius + 1):
        for x in range(-radius, radius + 1):
            if x*x + y*y <= radius*radius:
                print("*", end="")
            else:
                print(" ", end="")
        print()

while True:
    print("\n2D Graphics Editor")
    print("1. Draw Line")
    print("2. Draw Rectangle")
    print("3. Draw Triangle")
    print("4. Draw Circle")
    print("5. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        length = int(input("Enter line length: "))
        draw_line(length)

    elif choice == 2:
        width = int(input("Enter rectangle width: "))
        height = int(input("Enter rectangle height: "))
        draw_rectangle(width, height)

    elif choice == 3:
        height = int(input("Enter triangle height: "))
        draw_triangle(height)

    elif choice == 4:
        radius = int(input("Enter circle radius: "))
        draw_circle(radius)

    elif choice == 5:
        print("Exiting...")
        break

    else:
        print("Invalid choice!")
