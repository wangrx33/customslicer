/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qmyslicerAppMainWindow_h
#define __qmyslicerAppMainWindow_h

// myslicer includes
#include "qmyslicerAppExport.h"
class qmyslicerAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_MYSLICER_APP_EXPORT qmyslicerAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qmyslicerAppMainWindow(QWidget *parent=0);
  virtual ~qmyslicerAppMainWindow();

public slots:
  void on_HelpAboutmyslicerAppAction_triggered();

protected:
  qmyslicerAppMainWindow(qmyslicerAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qmyslicerAppMainWindow);
  Q_DISABLE_COPY(qmyslicerAppMainWindow);
};

#endif
