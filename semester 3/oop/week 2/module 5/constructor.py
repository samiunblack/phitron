class Phone:
    manufactured = 'Silicon Valey'
    
    def __init__(self, owner, brand, price, model):
        self.owner = owner
        self.brand = brand
        self.price = price
        self.model = model
    
    def send_sms(self, phone, sms):
        text = f'sending to: {phone} {sms}'
        print(text)
    
    def about(self):
        print(f'This is {self.model} of {self.brand} and {self.owner} owns it.')
        

my_phone = Phone('Black', 'Apple', 2000, 'Iphone 15')
my_phone.about()