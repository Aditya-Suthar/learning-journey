class ShoppingCart:
    def __init__(self):
        self.cart = {}

    def add_item(self, item, price):
        self.cart[item] = price
        print(item, "added to cart.")

    def remove_item(self, item):
        if item in self.cart:
            del self.cart[item]
            print(item, "removed from cart.")
        else:
            print(item, "not found in cart.")


    def show_cart(self):
        if not self.cart:
            print("Cart is empty.")
        else:
            print("\nItems in Cart:")
            for item, price in self.cart.items():
                print(item, ":", price)

    def total_amount(self):
        total = sum(self.cart.values())
        print("\nTotal Amount:", total)


cart = ShoppingCart()

cart.add_item("Shoes", 2000)
cart.add_item("Shirt", 1500)
cart.add_item("Watch", 3000)

cart.show_cart()
cart.total_amount()

cart.remove_item("Shirt")

cart.show_cart()
cart.total_amount()