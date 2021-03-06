# Example Code: Routing Service Microsoft MSQL Adapter

## Concept

Adapters are pluggable components that allow RTI Routing Service to consume and
produce data for different data domains (e.g., DDS, JMS, Socket, etc.).

By default, RTI Routing Service is distributed with a built-in DDS adapter. Any
other adapter plugins must be provided as a set of C, C++11 libraries or Java
classes registered within the `<adapter_library>` tag.

Input adapters are used to collect data samples from different data domains,
such as Connext DDS or JMS. The input samples are processed by the Routing Service
engine and are passed along to custom transformations if they are defined.
Finally, the transformed data is provided to the output adapters. The adapter
plugin API is used to create new adapters; it is supported in C, C++11 and Java.

## Example Description

This example shows how to create a simple adapter using the RTI Routing Service
Adapter SDK. The adapter reads from and writes to a Microsoft MSQL database. It 
demonstrates two XML configuration concepts, 1) how to define the type in XML and 
2) how to use discovery to discover the type. This example also demonstrates 
building a dynamic libray MSQL adapter that is loaded by the routing service and 
building an executable that instantiates the routing service with the MSQL adapter.
The executable example can be used to debug the adapter code.

