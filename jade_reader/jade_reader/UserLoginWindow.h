#pragma once

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>

class UserLoginWindow : public QDialog {
  Q_OBJECT
private:
  QLineEdit* emailLineEdit;
  QLineEdit* passwordLineEdit;
  QPushButton* signInButton;
  QPushButton* signUpButton;
  private slots:
  void openSignUpWindow();
public:
  explicit UserLoginWindow(QWidget* parent = Q_NULLPTR);
  ~UserLoginWindow();
};
