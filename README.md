<h1> Cchat v3 - Ncat TUI for GNU/Linux Distributions</h1>

#### Rejoice - you no longer have to struggle with flags to get ncat working properly in your terminal!
#### Here is an open-source TUI app written in C++ for high performance. 

<h1>Installation</h1>

```
git clone https://github.com/uhmmokay/cchat.git && cd ./cchat
g++ ./src/*.cpp -o cchat

```

<h1>Warning! </h1> 

### This is NOT completed program. Functionality will be expanded in the future.

<h1> So, what exactly is this program? </h1>

#### It solves the problem of users having to enter flags to use ncat.

#### Currently, the program implements only two functions: 

<ol>
    <li><h3>Connection to the server for communication</h3></li>
    <li><h3>Creating the server for communication</h3></li>
</ol>

<h1> What is your creation doing? </h1>

#### At the beginning, the program will output:

```

    Please choose what you want to do:
    1) Create local server for chatting.
    2) Connect to another server for chatting.
    3) Send file to server
    4) Create server for file

```

#### If you select 1, the program will ask you to choose a port and a password for your room. For chatting (you are host)

#### If you select 2, the program will ask you to write an ip, password and port of your target server. For chatting (you are client)

#### If you want to share your server with someone else after creating it, simply provide the IP address and the port you specified during setup.

#### If you select 3, the program will ask you to write an ip, password, path/to/file and port. Then, program will send file to your target (ip)

### If you select 4, the program will ask you to write a password, path/to/file and port. Then, program will await that someone will send you a file (provide ip, pass and port to get file)

# License?

### GNU Affero General Public License V3