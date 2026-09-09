def book_movie_ticket(number_of_tickets):
    wallet_balance = 1000

    try:
        number_of_tickets = int(number_of_tickets)
        price_per_ticket = wallet_balance / number_of_tickets

        print("Price per ticket:", price_per_ticket)

    except ZeroDivisionError:
        print("Error: Number of tickets cannot be zero.")

    except ValueError:
        print("Error: Please enter a valid number of tickets.")


tickets = input("Enter number of tickets: ")

book_movie_ticket(tickets)