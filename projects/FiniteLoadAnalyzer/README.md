## 4. Problem Definition — FiniteLoadAnalyzer

This project computes the bending stress placed on the fixed end of a symmetrical steel I-beam using classical mechanics of materials.

### Governing Equation

S = (L × d × c) / I

Where:

- **S** = Stress (psi)
- **L** = Load applied to the beam (lbs)
- **d** = Distance from fixed end, also called the moment arm (inches)
- **c** = One-half of the beam height (inches)
- **I** = Rectangular moment of inertia (in^4)

---

### (a) Unit Analysis

Units on the right side:

- L → lbs  
- d → inches  
- c → inches  
- I → inches^4  

Substituting units:

S = (lbs × in × in) / in^4  
S = lbs × in^2 / in^4  
S = lbs / in^2  

**Final Units of Stress:**

psi (pounds per square inch)

---

### (b) Example Calculation

Given:

- I = 21.4 in^4  
- Beam height = 6 in → c = 3 in  
- Load L = 700 lbs  
- Distance = 8 ft  

Convert distance:

8 ft × 12 = 96 in  

Compute stress:

S = (700 × 96 × 3) / 21.4  
S = 201600 / 21.4  
S ≈ 9420.56 psi  

**Result:**  
Stress ≈ 9420.56 psi  

---

### (c) Program Design Specification

#### Inputs
- Load (lbs)
- Distance from fixed end (feet or inches)
- Beam height (inches)
- Moment of inertia (in^4)

#### Outputs
- Stress (psi)

#### Algorithm

1. Read load L  
2. Read distance d (convert feet to inches if necessary)  
3. Read beam height h  
4. Compute c = h / 2  
5. Read moment of inertia I  
6. Compute S = (L × d × c) / I  
7. Output stress in psi  

---

This program models a simplified static bending stress calculation used in introductory structural analysis.