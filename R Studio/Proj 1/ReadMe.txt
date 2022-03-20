What the project does
--------------------- 
Use set.seed(1) for all operations that involve user-induced randomness
(1) Randomly split (using the sample command) the observations into a training set and a validation set,
so that the training set can be used to fit a linear model, and the validation set can be used to evaluate
the prediction accuracy of the fitted model. Here you have the freedom on splitting. But please be
careful with the number of observations for each set, since a training set with a few observations cannot
produce a relatively good fitted model. Caution: these 2 sets should be non-intersecting; sample from
the row indices but do not sample with replacement when creating the two sets.
(2) Apply best subset selection on all potential predictors without interactions between them, report the
best model and its fitted model, perform model diagnostics on the model, conduct hypothesis tests on
some coefficients of the model and report your findings, and assess the prediction accuracy of the fitted
model and report your findings. Note: you can use the mean squared error to measure prediction
accuracy.
(3) Implement LASSO (with cross-validation to select the optimal tuning parameter) on all potential
predictors without interactions between them, report the best model (that is based on the optimal
tuning parameter) and its fitted model, conduct hypothesis tests on some coefficients of the model and
report your findings, and assess the prediction accuracy of the fitted model and report your findings.
(4) Implement ridge regression (with cross-validation to select the optimal tuning parameter) without
interactions between them, report the best model (that is based on the optimal tuning parameter) and
its fitted model, conduct hypothesis tests on some coefficients of the model 2 and report your findings,
and assess the prediction accuracy of the fitted model and report your findings.
(5) Among the best/optimal models you would find in (2), (3) and (4) respectively, which one has the
best prediction accuracy? If you consider a trade-off between the number of predictors in a model and
its prediction accuracy, which among the best models you found in (2), (3) and (4) would you prefer? 
