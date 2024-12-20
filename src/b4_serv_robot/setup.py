from setuptools import find_packages, setup

package_name = 'b4_serv_robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yeeun',
    maintainer_email='ye971120@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'order = b4_serv_robot.order:main',
            'monitor = b4_serv_robot.monitor:main',
            'robot = b4_serv_robot.robot:main',
            'database = b4_serv_robot.database:main'
        ],
    },
)
