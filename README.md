# Digital System Design Project

## Overview
This project focuses on the design and implementation of a **shift register** using Verilog, emphasizing different design methodologies and approaches. The project was developed using **ModelSim** as the simulation tool and includes:

1. A shift register implemented using **JK Flip-Flops** and **multiplexers (MUX)**.
2. A shift register implemented using **D Flip-Flops**.
3. Two forms of behavioral methods to model shift registers.

## Features
- Modular Verilog code for clear and reusable components.
- Comprehensive testbenches for simulation and verification.
- Comparison of structural and behavioral design methodologies.

## Design Details
### Shift Register with JK Flip-Flops and MUX
This implementation utilizes:
- **JK Flip-Flops** for state storage.
- **Multiplexers (MUX)** for controlling input transitions and data flow.

### Shift Register with D Flip-Flops
This implementation simplifies the design by using:
- **D Flip-Flops**, where the input is directly controlled without the need for additional logic gates.

### Behavioral Methods
Two forms of behavioral modeling were implemented:
1. **Sequential behavioral modeling** to define the shift register using always blocks.
2. **High-level abstraction** focusing on concise logic representation.

## Tools and Technologies
- **Hardware Description Language:** Verilog
- **Simulation Tool:** ModelSim

## Getting Started
### Prerequisites
1. Install **ModelSim**.
2. Have a basic understanding of Verilog.
3. Clone the repository:
   ```bash
   git clone <repository_url>
   ```

### Project Structure
```
|-- src
|   |-- JK Flip-Flop and MUX-based design
|   |-- D Flip-Flop-based design
|   |-- Behavioral modeling
|-- testbench
|   |-- Testbench for JK Flip-Flop design
|   |-- Testbench for D Flip-Flop design
|   |-- Testbench for behavioral design
|-- README.md                      // Project documentation
```

### Simulation
1. Open ModelSim and create a new project.
2. Add the Verilog source files and the corresponding testbenches.
3. Compile the files and run the simulations.
4. Verify the waveforms and outputs for each implementation.

## Results
Each implementation has been verified for:
- Correct data shifting based on clock signals.
- Stable operation across different input patterns.

## Contributing
Contributions are welcome! Feel free to open issues or submit pull requests for enhancements or bug fixes.

## License
This project is licensed under the MIT License. See the LICENSE file for details.

## Acknowledgments
Special thanks to the digital systems design community for their tutorials and guidance on flip-flop-based designs.

