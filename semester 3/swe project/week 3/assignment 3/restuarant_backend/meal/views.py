from django.shortcuts import render

# Create your views here.


def home(req):
    return render(req, 'meal/index.html')


def show_meals(req):
    data = {
        "categories": [
            {
                "idCategory": "1",
                "strCategory": "Beef",
                "strCategoryThumb": "https://www.themealdb.com/images/category/beef.png",
                "strCategoryDescription": "Beef is the culinary name for meat from cattle, particularly skeletal muscle. Humans have been eating beef since prehistoric times.[1] Beef is a source of high-quality protein and essential nutrients.[2]"
            },
            {
                "idCategory": "2",
                "strCategory": "Chicken",
                "strCategoryThumb": "https://www.themealdb.com/images/category/chicken.png",
                "strCategoryDescription": "Chicken is a type of domesticated fowl, a subspecies of the red junglefowl. It is one of the most common and widespread domestic animals, with a total population of more than 19 billion as of 2011.[1] Humans commonly keep chickens as a source of food (consuming both their meat and eggs) and, more rarely, as pets."
            },
            {
                "idCategory": "3",
                "strCategory": "Dessert",
                "strCategoryThumb": "https://www.themealdb.com/images/category/dessert.png",
                "strCategoryDescription": "Dessert is a course that concludes a meal. The course usually consists of sweet foods, such as confections dishes or fruit, and possibly a beverage such as dessert wine or liqueur, however in the United States it may include coffee, cheeses, nuts, or other savory items regarded as a separate course elsewhere. In some parts of the world, such as much of central and western Africa, and most parts of China, there is no tradition of a dessert course to conclude a meal.The term dessert can apply to many confections, such as biscuits, cakes, cookies, custards, gelatins, ice creams, pastries, pies, puddings, and sweet soups, and tarts. Fruit is also commonly found in dessert courses because of its naturally occurring sweetness. Some cultures sweeten foods that are more commonly savory to create desserts."
            },
            {
                "idCategory": "4",
                "strCategory": "Lamb",
                "strCategoryThumb": "https://www.themealdb.com/images/category/lamb.png",
                "strCategoryDescription": "Lamb, hogget, and mutton are the meat of domestic sheep (species Ovis aries) at different ages.A sheep in its first year is called a lamb, and its meat is also called lamb. The meat of a juvenile sheep older than one year is hogget; outside the USA this is also a term for the living animal. The meat of an adult sheep is mutton, a term only used for the meat, not the living animals. The term mutton is almost always used to refer to goat meat in the Indian subcontinent"
            },
            {
                "idCategory": "5",
                "strCategory": "Miscellaneous",
                "strCategoryThumb": "https://www.themealdb.com/images/category/miscellaneous.png",
                "strCategoryDescription": "General foods that don't fit into another category. Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book."
            },
            {
                "idCategory": "6",
                "strCategory": "Pasta",
                "strCategoryThumb": "https://www.themealdb.com/images/category/pasta.png",
                "strCategoryDescription": "Pasta is a staple food of traditional Italian cuisine, with the first reference dating to 1154 in Sicily.\r\n\r\nAlso commonly used to refer to the variety of pasta dishes, pasta is typically a noodle made from an unleavened dough of a durum wheat flour mixed with water or eggs and formed into sheets or various shapes, then cooked by boiling or baking. As an alternative for those wanting a different taste, or who need to avoid products containing gluten, some pastas can be made using rice flour in place of wheat.[3][4] Pastas may be divided into two broad categories, dried (pasta secca) and fresh (pasta fresca)."
            },
        ]
    }
    return render(req, 'meal/show_meals.html', data)
