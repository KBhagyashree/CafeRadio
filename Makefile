caferadiomake: src/orders/order.cpp src/orders/home_delivery.cpp cafe_radio_app.cpp
	g++ -o run_cafe_radio_app cafe_radio_app.cpp src/orders/order.cpp src/orders/home_delivery.cpp -I.

