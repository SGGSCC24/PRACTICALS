#Using the rainfall data for the year 2015 available on the link https://data.world/rajanand/rainfall-in-india or https://www.kaggle.com/datasets/rajanand/rainfall-in-india

#Write an R script to:

#a. Read the first ten days of rainfall amounts from the CSV file.
data <- read.csv("C:/Users/aaumg/Downloads/rainfall in india 1901-2015.csv")
(first_ten_days <- data[1:10,])

#b. Create a subset of the rainfall data where rain is larger than 20.
#(rain_greater_than_20 <- subset(data,data[c(3:14)]>20))
(rain_greater_than_20 <- subset(data,data[c(3:14)]>20))

#c. Find the mean rainfall for days where the rainfall was at least 4.

#d. Subset the vector where rainfall is either exactly zero, or exactly 0.6.
(rain_0_or_06 <- subset(rainfall, data[c(3:14)] == 0 | data[c(3:14)] == 0.6))

#e. Use a suitable plot to compare the rainfall of each day of every month, and to compare the summarized rainfall of every month.