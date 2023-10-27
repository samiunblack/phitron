class Phone:
    price = 120000
    color = "Purple"
    brand = "apple"
    features = ['camera', 'speaker', 'hammer']
    

    def call(self):
        print('calling someone')
        
    def send_sms(self, contact, sms):
        text = f'sending SMS to: {contact} and message: {sms}'
        return text    

my_phone = Phone()

my_phone.call()
print(my_phone.send_sms('wife', 'I love you :D'))