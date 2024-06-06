# hello-x

This is a simple dockerized C script that greets the user.

This was created for the [DevOps with Docker MOOC](https://devopswithdocker.com/).

## Running from DockerHub
```bash
docker run koenigscode/hello-x Michael
```

## Building locally & running the project
Clone the [repository](https://github.com/koenigscode/hello-x)
```bash
docker build -t hello-x .
docker run hello-x Michael 
```

