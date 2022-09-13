# import client lirbrary for python
from telnetlib import RCP
import rclpy
#Import node package
from rclpy.node import Node
#Importing standard ROS message
from std_msgs.msg import String

class SimplePublisher(Node):
    def __init__(self):
        #node name is a mandatory parameter needed while importing Node
        super().__init__("AKsimplepublisher")
        #use default create publisher function
        self.pub = self.create_publisher(String,'/physics',10)
        # 3rd argument is the queue length. QOS - Quality of Service

        #Creating a timer to publish messages
        time_period=1
        self.timer=self.create_timer(time_period,self.timer_callback)
        self.counter = 10000
    # need to define the callback function which will be used by the publisher
    def timer_callback(self):
        msg = String()
        msg.data= f'World will end in {self.counter} seconds'
        self.pub.publish(msg)
        self.get_logger().info(f'Publishing a message that should have worked in in 2012. Nm, you still have {self.counter} seconds')
        self.counter -=1


def main(args=None):
    rclpy.init(args=args)
    simplePub= SimplePublisher()
    rclpy.spin(simplePub)
    simplePub.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()