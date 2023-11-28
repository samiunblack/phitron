from django.shortcuts import render
import datetime

# Create your views here.
def home(req):
    data = {
            "school_start": datetime.datetime.now(),
            "data": [
            {
                'id': '377386', 
                'name': 'Grace Davis', 
                'courses': []
            }, 
            {
                'id': '123392', 
                'name': 'Henry Johnson', 
                'courses': ['History', 'Art', 'Programming', 'Science']
            },
            {
                'id': '213438', 
                'name': 'Bob Davis', 
                'courses': ['Programming', 'Physical Education', 'English', 'Music', 'Math', 'Art', 'History', 'Science']
            }, 
            {
                'id': '694449', 
                'name': 'John Williams', 
                'courses': ['Music', 'Programming', 'Math', 'Art', 'Science']
            }, 
            {
                'id': '358130', 
                'name': 'John Smith', 
                'courses': ['Art', 'English', 'Physical Education', 'Math', 'History', 'Science', 'Music']
            }, 
            {
                'id': '811163', 
                'name': 'Jane Taylor', 
                'courses': ['Music', 'Math', 'Physical Education', 'Programming', 'English', 'Art', 'Science']
            }, 
            {
                'id': '639532', 
                'name': 'David Smith', 
                'courses': ['Physical Education', 'English', 'Music', 'Math']
            }, 
            {
                'id': '544332', 
                'name': 'Grace Johnson', 
                'courses': ['English', 'Art', 'Music', 'Math', 'Science', 'Programming', 'History', 'Physical Education']
            }, 
            {
                'id': '327935', 
                'name': 'John Wilson', 
                'courses': ['Music', 'Math', 'English']
            }, 
            {
                'id': '644605', 
                'name': 'Bob Moore', 
                'courses': ['Science']
            }, 
            {
                'id': '243932', 
                'name': 'eva brown', 
                'courses': ['Science', 'English', 'Programming', 'History']
            }, 
            {
                'id': '413977', 
                'name': 'David Williams', 
                'courses': ['Art', 'History']
            }, 
            {
                'id': '727280', 
                'name': 'Alice Johnson', 
                'courses': ['Music', 'Math', 'English', 'Art', 'Programming', 'Physical Education', 'History']
            }, 
            {
                'id': '509958', 
                'name': 'Eva Wilson', 
                'courses': ['Physical Education', 'Science', 'Math']
            }, 
            {
                'id': '890094', 
                'name': 'Frank Brown', 
                'courses': ['Art', 'Programming']
            }, 
            {
                'id': '300024', 
                'name': 'David Williams', 
                'courses': ['Music', 'Physical Education', 'Art', 'History', 'Programming', 'English']
            }, 
            {
                'id': '137262', 
                'name': 'Eva Smith', 
                'courses': ['Physical Education', 'Science', 'Music', 'Art', 'Programming']
            }, 
            {
                'id': '864218', 
                'name': 'Alice Miller', 
                'courses': ['Art']
            }, 
            {
                'id': '545014', 
                'name': 'Jane Moore', 
                'courses': ['Physical Education', 'English', 'Programming', 'Science', 'Art', 'Math', 'Music', 'History']
            }, 
            {
                'id': '290703', 
                'name': 'Bob Johnson', 
                'courses': ['Programming', 'Art', 'Physical Education', 'English', 'Science', 'Math']
            }, 
            {
                'id': '363541', 
                'name': 'Henry Moore', 
                'courses': ['Programming', 'Math']
            }, 
            {
                'id': '468296', 
                'name': 'Alice Davis', 
                'courses': ['English', 'Music', 'Math', 'Art', 'Science', 'Physical Education', 'History', 'Programming']
            }, 
            {
                'id': '324783', 
                'name': 'Bob Smith', 
                'courses': ['Art', 'Music', 'History', 'Programming', 'English', 'Science', 'Math']
            }
        ]}
    return render(req, 'practiceapp/index.html', data)

