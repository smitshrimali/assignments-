class Notification:
    def send(self):
        print("Sending notification")


class EmailNotification(Notification):
    def send(self):
        print("Sending notification via Email")


class SMSNotification(Notification):
    def send(self):
        print("Sending notification via SMS")


email = EmailNotification()
sms = SMSNotification()

email.send()
sms.send()

# Method overriding means a subclass provides its own implementation
# of a method that already exists in the parent class.