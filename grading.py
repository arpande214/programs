student_records = {
    "Arnab": 95,
    "Saikat": 84,
    "Rupam": 65,
    "Bisal": 78,
    "Aniket": 48,
}
# Auto grading system
def grading():
    for x in student_records:   
        temp = student_records[x]
        if(temp <= 100 and temp >= 91):
            student_records[x] = "Outstanding"
        elif(temp <= 90 and temp >= 81):
            student_records[x] = "Exceeds Expectations"
        elif(temp <= 80 and temp >= 71):
            student_records[x] = "Acceptable"
        else:
            student_records[x] = "Fail"
    print(student_records)
grading()