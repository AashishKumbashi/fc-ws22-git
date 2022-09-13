# import client lirbrary for python
from telnetlib import RCP
import rclpy
#Import node package
from rclpy.node import Node
#Importing standard ROS message
from std_msgs.msg import String

class SimpleSubscriber(Node):
    def __init__(self):
        super().__init__("SimpleSubscriber")
        self.sub = self.create_subscription(String,'/physics',self.sub_callback,10)
    
    def sub_callback(self, msg):
        #use ROS logger to print the response
        self.get_logger().info(f'No Astra can save us because I heard {msg.data}')

def main(args=None):
    rclpy.init(args=args)
    simpleSub=SimpleSubscriber()
    rclpy.spin(simpleSub)
    simpleSub.destroy_node()
    rclpy.shutdown()

if __name__=="__main__":
    main()

