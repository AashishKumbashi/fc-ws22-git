# import client lirbrary for python
from telnetlib import RCP
import rclpy
#Import node package
from rclpy.node import Node
#Importing standard ROS message
from std_msgs.msg import String
from fc_custom_interface.msg import CustomMessage

class SimplePublisher(Node):
    def __init__(self):
        #node name is a mandatory parameter needed while importing Node
        super().__init__("AKsimplepublisher")
        #use default create publisher function
        self.pub = self.create_publisher(CustomMessage,'/physics',10)
        # 3rd argument is the queue length. QOS - Quality of Service

        #Creating a timer to publish messages
        time_period=1
        self.timer=self.create_timer(time_period,self.timer_callback)
        self.counter = 10000
    # need to define the callback function which will be used by the publisher
    def timer_callback(self):
        msg = CustomMessage()
        msg.int_a= self.counter
        msg.str_b="AK"
        msg.bool_c=False
        msg.str_d=['Apna','button','doondo']

        self.pub.publish(msg)
        self.get_logger().info(f'Publishing a message about a masterpiece Nm. \
            My name is ${msg.str_b} and there are a total of {self.counter} astras. \
            People alive {msg.str_d} ')
        self.counter +=1


def main(args=None):
    rclpy.init(args=args)
    simplePub= SimplePublisher()
    rclpy.spin(simplePub)
    simplePub.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()