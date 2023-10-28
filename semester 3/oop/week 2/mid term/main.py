class Hall:
    def __init__(self, rows, cols, hall_no) -> None:
        self.__seats = {}
        self.__show_list = []
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no
        
        
    def entry_show(self, id, movie_name, time):
        show = (id, movie_name, time)
        self.__show_list.append(show)
        
        self.__seats[id] = []
        
        for i in range(self.__rows):
            col = []
            for j in range(self.__cols):
                col.append(0)
            self.__seats[id].append(col)
            
    
    def book_seats(self, id, seat_list):
        show = next((show for show in self.__show_list if show[0] == id), None)
        if(show):
            show_id = show[0]
            for seat in seat_list:
                if seat[0] >= self.__rows or seat[1] >= self.__cols:
                    print(f'Sorry! Seat {seat} is out of bound.')
                else:
                    if(self.__seats[show_id][seat[0]][seat[1]] == 0):
                        self.__seats[show_id][seat[0]][seat[1]] = 1
                        print(f'Seat {seat} booked for show {id}')
                    else:
                        print(f'Sorry! Seat {seat} is already booked for show {id}.')
        else:
            print(f'Sorry! Show ID: {id} is not valid.')


    def view_show_list(self):
        print("----------")
        for show in self.__show_list:
            print(f'MOVIE NAME: {show[1]}({show[0]}) SHOW ID: {show[0]} TIME: {show[2]}')
        print("----------")


    def view_available_seats(self, id):
        show = next((show for show in self.__show_list if show[0] == id), None)
        print("----------")
        if(show):
            show_id = show[0]
            for i in range(self.__rows):
                for j in range(self.__cols):
                    print(self.__seats[show_id][i][j], end=" ")
            
                print()
                    
        else:
            print(f'Sorry! Show ID: {id} is not valid.')
        print("----------")

class Star_Cinema:
    __hall_list = []
    
    def __init__(self) -> None:
        pass
    
    def entry_hall(self, hall):
        self.__hall_list.append(hall)
    
    @property
    def hall_list(self):
        return self.__hall_list

    
hall = Hall(7, 8, 1)
star_cinema = Star_Cinema()
star_cinema.entry_hall(hall)

hall.entry_show(111, "Batman Begins", "28/10/2023  11:00AM")
hall.entry_show(222, "The Dark Knight", "28/10/2023  3:00PM")
hall.entry_show(333, "The Dark Knight Rises", "28/10/2023  7:00PM")



def main():
    while True:
        print("1. VIEW ALL SHOW TODAY")
        print("2. VIEW AVAILABLE SEATS")
        print("3. BOOK TICKET")
        print("4. EXIT")
        
        n = int(input("ENTER OPTION: "))
        
        if n == 1:
            for hall in star_cinema.hall_list:
                hall.view_show_list()
        elif n == 2:
            show_id = int(input("ENTER SHOW ID: "))
            hall.view_available_seats(show_id)
        elif n == 3:
            show_id = int(input("ENTER SHOW ID: "))
            number_of_tickets = int(input("ENTER NUMBER OF TICKETS: "))
            tickets = []
            
            for i in range(number_of_tickets):
                row = int(input(f'ENTER SEAT {i + 1} ROW: '))
                col = int(input(f'ENTER SEAT {i + 1} COL: '))
                tickets.append((row, col))

            hall.book_seats(show_id, tickets)
        elif n == 4:
            break;
        else:
            print("PLEASE ENTER VALID OPTION.")
            
            
main()