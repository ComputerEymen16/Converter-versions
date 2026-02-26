#Request the user to press Enter to start
input("Press Enter to start...")

#Variable definition and getting value from user
centimeter = float(input("Enter the value in centimeters: "))

#Conversion operations
meter = centimeter / 100.0
kilometer = centimeter / 100000.0

#Printing results to screen
print(f"Value in meters: {meter:.2f} m")
print(f"Value in kilometers: {kilometer:.5f} km")

#Request the user to press Enter to close the terminal
input("Press Enter to end the program...")