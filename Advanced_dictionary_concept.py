# What if we want to store multiple values for one key
# Here we can use dictionary and list concept to overcome the problem

suject_taken_by_student = {
    "Arnab": ["Mathematics","Physics","Chemistry","English","Computer"],
    "Saikat": ["Geography","History","Political Science","EVS","Bengali"],
}

# Now if we want a value as a dictionary as key-value pair can we do that?
# Yes obviously we can do that easily. We can build this type of complex data structure 
# with the help of python. Now let's see how to do that...

marks_per_subject ={
    # Key-Value pair (Key = String, Value = Dict(Key: String, Value: List))
    "Arnab": {
        "Outstanding": ["Math","Eng","Comp"],
        "Expected": ["His","Geo","EVS"],
        "Low marks": ["Electrical","Mechanical"],
    },

    "Saikat": {
        "Outstanding": ["Geo","Eng","Pol"],
        "Expected": ["His","Math","EVS"],
        "Low marks": ["Economics","Computer"],
    }
}
