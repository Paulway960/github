#Practice the formatting strings
print("Please enter the following information")

print()

#Ask for basic information about someone's identity
first = input("Frist Name: ")
last = input("Last Name: ")
email = input("Email Adrress: ")
phone= input("Phone Number: ")
job_title = input("Job Title: ")
id_number = input("ID Number: ")

#Ask for additional information about someone's identity
hair_color = input("Hair Color: ")
eye_color = input("Eye Color: ")
month = input("Starting Month: ")
traning = input("Completed additional trainong? ")

#Now print out the ID Card (identity)
print("\nThe ID Card is:")
print("..........................")
print(f"{last.upper()}, {first.capitalize()})
print(job_title.title())
print(f"ID: {id_number}")
print()
print(email.lower())
print(phone)
print()

print(f"Hair: {hair_color:16} Eyes: {eye_color}")
print(f"Month: {month:15} Training: {training}")
print("........................................")
