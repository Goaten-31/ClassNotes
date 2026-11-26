# Project Objectives:

Build an online store system to manage products, customers and orders. It benefits shoppers and store staff.

# Scope of Work:

Target users are online retailers, their customers and order-processing staff.

# Functional Requirements:

- Store each product's name, price and category.
- Let customers place multiple orders.
- Let each order contain multiple products.
- Record each order's date, total amount and status.
- Track status as pending, shipped or delivered.

**Added:**

- Record quantity and purchase price on each order line, so later price changes do not alter old orders.
- Calculate totals from order lines.
- Allow order changes only before placement.
- Check and reserve stock when an order is placed; placement fails if stock is insufficient.
- Store customer delivery addresses and select one for each order.
- Record payment attempts. Require successful payment before shipping.
- Change status only from pending to shipped, then delivered.

A shopping basket is represented by an unplaced order with no status or order date. Placing it records the date and sets its status to pending.
