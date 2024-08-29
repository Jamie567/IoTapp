
import paho.mqtt.publish as publish
publish.single("ifn649", "Hello World", hostname="13.55.233.218")
print("Done")


