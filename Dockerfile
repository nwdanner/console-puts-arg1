FROM ubuntu:17.10
WORKDIR /app
ADD test.c /app
ADD testapp /app
#ENV TARGET_APP a.out
CMD ["testapp", "Neal says HELLO WORLD!"]

